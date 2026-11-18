// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// Apply<Chaos::Softs::FSolverParticles> @ 143c7f1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FPBDLongRangeConstraints *this,FSolverParticles *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PBD_LongRange> FVar14;
  ulonglong uVar15;
  FName FVar16;
  char cVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  uint local_res20 [2];
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  FName local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154 [4];
  uint local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  FColor_u_0 local_138;
  undefined4 local_134;
  FName local_130;
  FName local_128;
  code *local_118;
  FPBDLongRangeConstraints **local_110;
  code *local_108;
  FPBDLongRangeConstraints **local_100;
  code *local_f8;
  FPBDLongRangeConstraints **local_f0;
  code *local_e8;
  FPBDLongRangeConstraints **local_e0;
  FPBDLongRangeConstraints *local_d8;
  FSolverParticles *local_d0;
  undefined8 *local_c8;
  float local_c0;
  float local_bc;
  FPBDLongRangeConstraints *local_b8;
  FSolverParticles *local_b0;
  undefined8 *local_a8;
  FPBDLongRangeConstraints *local_a0;
  FSolverParticles *local_98;
  undefined8 *local_90;
  float local_88;
  FPBDLongRangeConstraints *local_80;
  FSolverParticles *local_78;
  undefined8 *local_70;
  float local_68;
  FName local_60 [5];
  
  bVar21 = CpuChannel->Enabled < 0;
  if (bVar21) {
    local_res20[0] = (uint)local_res20[0]._1_3_ << 8;
  }
  else {
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId57,"FPBDLongRangeConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDLongRangeConstraints.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId57);
  }
  cVar17 = !bVar21;
  FVar14 = StatPtr_STAT_PBD_LongRange;
  if (StatPtr_STAT_PBD_LongRange == (FThreadSafeStaticStat<FStat_STAT_PBD_LongRange>)0x0) {
    pFVar13 = ::FName::FName(local_60,"STAT_PBD_LongRange");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_PBD_LongRange>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_LongRange,*pFVar13,
                        L"Chaos PBD Long Range Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar9 = false;
  bVar21 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar21 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_130.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDLongRangeConstraints.cpp"
                   ,0x3a);
        bVar9 = true;
        bVar21 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar11 = true;
      goto LAB_143c7f378;
    }
  }
  bVar9 = bVar12;
  bVar21 = bVar11;
  bVar11 = false;
  local_160 = local_128;
  FVar16 = local_128;
LAB_143c7f378:
  iVar10 = ChaosPBDLongRangeConstraintsMinParallelBatchSize;
  fVar22 = __real_38d1b717;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar23 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar22)) {
      fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      plVar7 = (longlong *)this->_padding_;
      puVar18 = (undefined8 *)*plVar7;
      if (bChaos_LongRange_ISPC_Enabled == false) {
        lVar4 = plVar7[1];
        puVar19 = puVar18 + (longlong)(int)lVar4 * 2;
        while( true ) {
          if ((int)plVar7[1] != (int)lVar4) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_154);
          }
          if (puVar18 == puVar19) break;
          local_e0 = &local_d8;
          local_e8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l21::<lambda_1>,void,int>
                     ::Call;
          local_d8 = this;
          local_d0 = param_1;
          local_c8 = puVar18;
          local_c0 = fVar23;
          local_bc = fVar22;
          PhysicsParallelFor(*(int *)(puVar18 + 1),(TFunctionRef<void___cdecl(int)> *)&local_e8,
                             *(int *)(puVar18 + 1) < iVar10);
          puVar18 = puVar18 + 2;
        }
        FVar16 = local_160;
        cVar17 = (char)local_res20[0];
      }
      else {
        lVar4 = plVar7[1];
        puVar19 = puVar18 + (longlong)(int)lVar4 * 2;
        while( true ) {
          if ((int)plVar7[1] != (int)lVar4) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_155);
          }
          if (puVar18 == puVar19) break;
          ApplyLongRangeConstraints
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,*puVar18,fVar23,fVar22,
                     *(undefined4 *)(puVar18 + 1),(int)this->_padding_);
          puVar18 = puVar18 + 2;
        }
      }
    }
    else {
      puVar18 = (undefined8 *)this->_padding_;
      uVar3 = *(uint *)(puVar18 + 1);
      uVar15 = (ulonglong)(int)uVar3;
      puVar19 = (undefined8 *)*puVar18;
      puVar20 = puVar19 + uVar15 * 2;
      if (bChaos_LongRange_ISPC_Enabled == false) {
        while( true ) {
          local_res20[0] = uVar3;
          if (*(int *)(puVar18 + 1) != (int)uVar15) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_156);
          }
          if (puVar19 == puVar20) break;
          local_f0 = &local_80;
          local_f8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l36::<lambda_2>,void,int>
                     ::Call;
          local_80 = this;
          local_78 = param_1;
          local_70 = puVar19;
          local_68 = fVar23;
          PhysicsParallelFor(*(int *)(puVar19 + 1),(TFunctionRef<void___cdecl(int)> *)&local_f8,
                             *(int *)(puVar19 + 1) < iVar10);
          uVar15 = (ulonglong)local_res20[0];
          puVar19 = puVar19 + 2;
          uVar3 = local_res20[0];
        }
      }
      else {
        while( true ) {
          local_148 = puVar20;
          local_150 = uVar3;
          puVar20 = local_148;
          if (*(int *)(puVar18 + 1) != (int)uVar15) {
            local_167[0] = 0;
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_167);
          }
          if (puVar19 == puVar20) break;
          local_164 = *(uint *)(puVar19 + 1);
          lVar4 = this->_padding_;
          local_140 = (undefined8 *)this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ApplyLongRangeConstraintsScaleWeightmap
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,*puVar19,fVar23,lVar5,local_140,
                     local_164,(int)lVar4);
          uVar15 = (ulonglong)local_150;
          puVar19 = puVar19 + 2;
          uVar3 = local_150;
          puVar20 = local_148;
        }
      }
    }
  }
  else if (((int)this->_padding_ < 2) ||
          ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
    local_160 = (FName)this->_padding_;
    puVar18 = *(undefined8 **)local_160;
    if (bChaos_LongRange_ISPC_Enabled == false) {
      iVar1 = *(int *)((longlong)local_160 + 8);
      puVar19 = puVar18 + (longlong)iVar1 * 2;
      while( true ) {
        if (*(int *)((longlong)local_160 + 8) != iVar1) {
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_157);
        }
        if (puVar18 == puVar19) break;
        local_100 = &local_a0;
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_3>,void,int>
                    ::Call;
        local_a0 = this;
        local_98 = param_1;
        local_90 = puVar18;
        local_88 = fVar22;
        PhysicsParallelFor(*(int *)(puVar18 + 1),(TFunctionRef<void___cdecl(int)> *)&local_108,
                           *(int *)(puVar18 + 1) < iVar10);
        puVar18 = puVar18 + 2;
      }
    }
    else {
      local_164 = *(uint *)((longlong)local_160 + 8);
      uVar15 = (ulonglong)(int)local_164;
      local_148 = puVar18 + uVar15 * 2;
      while( true ) {
        puVar19 = local_148;
        if (*(int *)((longlong)local_160 + 8) != (int)uVar15) {
          local_168 = 0;
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_168);
        }
        if (puVar18 == puVar19) break;
        local_140 = (undefined8 *)this->_padding_;
        lVar4 = this->_padding_;
        uVar2 = *(undefined4 *)(puVar18 + 1);
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar5 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ApplyLongRangeConstraintsStiffnessWeightmap
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,*puVar18,lVar5,local_140,fVar22,
                   uVar2,(int)lVar4);
        puVar18 = puVar18 + 2;
        uVar15 = (ulonglong)local_164;
      }
    }
  }
  else {
    local_160 = (FName)this->_padding_;
    puVar18 = *(undefined8 **)local_160;
    if (bChaos_LongRange_ISPC_Enabled == false) {
      iVar1 = *(int *)((longlong)local_160 + 8);
      puVar19 = puVar18 + (longlong)iVar1 * 2;
      while( true ) {
        if (*(int *)((longlong)local_160 + 8) != iVar1) {
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_158);
        }
        if (puVar18 == puVar19) break;
        local_110 = &local_b8;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>,void,int>
                    ::Call;
        local_b8 = this;
        local_b0 = param_1;
        local_a8 = puVar18;
        PhysicsParallelFor(*(int *)(puVar18 + 1),(TFunctionRef<void___cdecl(int)> *)&local_118,
                           *(int *)(puVar18 + 1) < iVar10);
        puVar18 = puVar18 + 2;
      }
    }
    else {
      local_164 = *(uint *)((longlong)local_160 + 8);
      uVar15 = (ulonglong)(int)local_164;
      local_140 = puVar18 + uVar15 * 2;
      while( true ) {
        puVar19 = local_140;
        if (*(int *)((longlong)local_160 + 8) != (int)uVar15) {
          local_res20[0] = local_res20[0] & 0xffffff00;
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (puVar18 == puVar19) break;
        local_134 = (undefined4)this->_padding_;
        local_150 = *(uint *)(puVar18 + 1);
        local_148 = (undefined8 *)this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar4 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar5 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ApplyLongRangeConstraintsStiffnessScaleWeightmaps
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,*puVar18,lVar6,lVar5,lVar4,
                   local_148,local_150,local_134);
        puVar18 = puVar18 + 2;
        uVar15 = (ulonglong)local_164;
      }
    }
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (cVar17 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143c7fa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDLongRangeConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_PBD_LongRange> FVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  ulonglong uVar15;
  FName FVar16;
  undefined8 *puVar17;
  char cVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  uint local_res20 [2];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4;
  undefined4 local_1b0;
  FName local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c [4];
  undefined8 *local_198;
  longlong *local_190;
  undefined8 *local_188;
  FColor_u_0 local_180 [2];
  FName local_178;
  FName local_170;
  longlong local_160;
  code *local_158;
  FPBDLongRangeConstraints **local_150;
  code *local_148;
  FPBDLongRangeConstraints **local_140;
  code *local_138;
  FPBDLongRangeConstraints **local_130;
  code *local_128;
  FPBDLongRangeConstraints **local_120;
  FPBDLongRangeConstraints *local_118;
  FSolverParticlesRange *local_110;
  undefined8 *local_108;
  float local_100;
  float local_fc;
  FPBDLongRangeConstraints *local_f8;
  FSolverParticlesRange *local_f0;
  undefined8 *local_e8;
  FPBDLongRangeConstraints *local_e0;
  FSolverParticlesRange *local_d8;
  undefined8 *local_d0;
  float local_c8;
  FPBDLongRangeConstraints *local_c0;
  FSolverParticlesRange *local_b8;
  undefined8 *local_b0;
  float local_a8;
  FName local_a0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68 [3];
  
  bVar21 = CpuChannel->Enabled < 0;
  if (bVar21) {
    local_res20[0] = (uint)local_res20[0]._1_3_ << 8;
  }
  else {
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId57,"FPBDLongRangeConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDLongRangeConstraints.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId57);
  }
  cVar18 = !bVar21;
  FVar13 = StatPtr_STAT_PBD_LongRange;
  if (StatPtr_STAT_PBD_LongRange == (FThreadSafeStaticStat<FStat_STAT_PBD_LongRange>)0x0) {
    pFVar12 = ::FName::FName(&local_a0,"STAT_PBD_LongRange");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_PBD_LongRange>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_LongRange,*pFVar12,
                        L"Chaos PBD Long Range Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar8 = false;
  bVar21 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar21 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_178.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDLongRangeConstraints.cpp"
                   ,0x3a);
        bVar8 = true;
        bVar21 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar10 = true;
      goto LAB_143c7fc44;
    }
  }
  bVar8 = bVar11;
  bVar21 = bVar10;
  bVar10 = false;
  local_1a8 = local_170;
  FVar16 = local_170;
LAB_143c7fc44:
  iVar9 = ChaosPBDLongRangeConstraintsMinParallelBatchSize;
  fVar22 = __real_38d1b717;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar23 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar22)) {
      fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
      local_190 = (longlong *)this->_padding_;
      puVar19 = (undefined8 *)*local_190;
      if (bChaos_LongRange_ISPC_Enabled == false) {
        lVar3 = local_190[1];
        puVar20 = puVar19 + (longlong)(int)lVar3 * 2;
        while( true ) {
          if ((int)local_190[1] != (int)lVar3) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_19c);
          }
          if (puVar19 == puVar20) break;
          local_128 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l21::<lambda_1>,void,int>
                      ::Call;
          local_120 = &local_118;
          local_118 = this;
          local_110 = param_1;
          local_108 = puVar19;
          local_100 = fVar23;
          local_fc = fVar22;
          PhysicsParallelFor(*(int *)(puVar19 + 1),(TFunctionRef<void___cdecl(int)> *)&local_128,
                             *(int *)(puVar19 + 1) < iVar9);
          puVar19 = puVar19 + 2;
        }
        FVar16 = local_1a8;
        cVar18 = (char)local_res20[0];
      }
      else {
        local_res20[0] = *(uint *)(local_190 + 1);
        uVar15 = (ulonglong)(int)local_res20[0];
        local_198 = puVar19 + uVar15 * 2;
        while( true ) {
          puVar20 = local_198;
          if ((int)local_190[1] != (int)uVar15) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_19d);
          }
          if (puVar19 == puVar20) break;
          lVar3 = this->_padding_;
          uVar2 = *(undefined4 *)(puVar19 + 1);
          uVar5 = *puVar19;
          pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,local_68);
          ApplyLongRangeConstraints(pTVar14->DataPtr,uVar5,fVar23,fVar22,uVar2,(int)lVar3);
          puVar19 = puVar19 + 2;
          uVar15 = (ulonglong)local_res20[0];
        }
      }
    }
    else {
      puVar19 = (undefined8 *)this->_padding_;
      uVar1 = *(uint *)(puVar19 + 1);
      uVar15 = (ulonglong)(int)uVar1;
      puVar20 = (undefined8 *)*puVar19;
      puVar17 = puVar20 + uVar15 * 2;
      if (bChaos_LongRange_ISPC_Enabled == false) {
        while( true ) {
          local_res20[0] = uVar1;
          if (*(int *)(puVar19 + 1) != (int)uVar15) {
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_19e);
          }
          if (puVar20 == puVar17) break;
          local_130 = &local_c0;
          local_138 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l36::<lambda_2>,void,int>
                      ::Call;
          local_c0 = this;
          local_b8 = param_1;
          local_b0 = puVar20;
          local_a8 = fVar23;
          PhysicsParallelFor(*(int *)(puVar20 + 1),(TFunctionRef<void___cdecl(int)> *)&local_138,
                             *(int *)(puVar20 + 1) < iVar9);
          uVar15 = (ulonglong)local_res20[0];
          puVar20 = puVar20 + 2;
          uVar1 = local_res20[0];
        }
      }
      else {
        while( true ) {
          local_188 = puVar17;
          local_1b4 = uVar1;
          puVar17 = local_188;
          if (*(int *)(puVar19 + 1) != (int)uVar15) {
            local_1b7[0] = 0;
            `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_1b7);
          }
          if (puVar20 == puVar17) break;
          local_1a8.ComparisonIndex.Value = (uint)this->_padding_;
          local_1b0 = *(undefined4 *)(puVar20 + 1);
          local_198 = (undefined8 *)this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar3 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar5 = *puVar20;
          pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_78);
          ApplyLongRangeConstraintsScaleWeightmap
                    (pTVar14->DataPtr,uVar5,fVar23,lVar3,local_198,local_1b0,
                     local_1a8.ComparisonIndex.Value);
          uVar15 = (ulonglong)local_1b4;
          puVar20 = puVar20 + 2;
          uVar1 = local_1b4;
          puVar17 = local_188;
        }
      }
    }
  }
  else if (((int)this->_padding_ < 2) ||
          ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar22 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->_padding_);
    plVar6 = (longlong *)this->_padding_;
    uVar1 = *(uint *)(plVar6 + 1);
    uVar15 = (ulonglong)(int)uVar1;
    puVar19 = (undefined8 *)*plVar6;
    puVar20 = puVar19 + uVar15 * 2;
    if (bChaos_LongRange_ISPC_Enabled == false) {
      while( true ) {
        local_res20[0] = uVar1;
        if ((int)plVar6[1] != (int)uVar15) {
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_19f);
        }
        if (puVar19 == puVar20) break;
        local_140 = &local_e0;
        local_148 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_3>,void,int>
                    ::Call;
        local_e0 = this;
        local_d8 = param_1;
        local_d0 = puVar19;
        local_c8 = fVar22;
        PhysicsParallelFor(*(int *)(puVar19 + 1),(TFunctionRef<void___cdecl(int)> *)&local_148,
                           *(int *)(puVar19 + 1) < iVar9);
        uVar15 = (ulonglong)local_res20[0];
        puVar19 = puVar19 + 2;
        uVar1 = local_res20[0];
      }
    }
    else {
      while( true ) {
        local_188 = puVar20;
        local_1b4 = uVar1;
        puVar20 = local_188;
        if ((int)plVar6[1] != (int)uVar15) {
          local_1b8 = 0;
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_1b8);
        }
        if (puVar19 == puVar20) break;
        local_1a8.ComparisonIndex.Value = (uint)this->_padding_;
        local_1b0 = *(undefined4 *)(puVar19 + 1);
        local_198 = (undefined8 *)this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar5 = *puVar19;
        pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_88);
        ApplyLongRangeConstraintsStiffnessWeightmap
                  (pTVar14->DataPtr,uVar5,lVar3,local_198,fVar22,local_1b0,
                   local_1a8.ComparisonIndex.Value);
        uVar15 = (ulonglong)local_1b4;
        puVar19 = puVar19 + 2;
        uVar1 = local_1b4;
        puVar20 = local_188;
      }
    }
  }
  else {
    local_190 = (longlong *)this->_padding_;
    puVar19 = (undefined8 *)*local_190;
    if (bChaos_LongRange_ISPC_Enabled == false) {
      lVar3 = local_190[1];
      puVar20 = puVar19 + (longlong)(int)lVar3 * 2;
      while( true ) {
        if ((int)local_190[1] != (int)lVar3) {
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_1a0);
        }
        if (puVar19 == puVar20) break;
        local_150 = &local_f8;
        local_158 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::<lambda_4>,void,int>
                    ::Call;
        local_f8 = this;
        local_f0 = param_1;
        local_e8 = puVar19;
        PhysicsParallelFor(*(int *)(puVar19 + 1),(TFunctionRef<void___cdecl(int)> *)&local_158,
                           *(int *)(puVar19 + 1) < iVar9);
        puVar19 = puVar19 + 2;
      }
    }
    else {
      uVar15 = (ulonglong)(int)*(uint *)(local_190 + 1);
      local_1a8.ComparisonIndex.Value = *(uint *)(local_190 + 1);
      local_198 = puVar19 + uVar15 * 2;
      while( true ) {
        puVar20 = local_198;
        if ((int)local_190[1] != (int)uVar15) {
          local_res20[0] = local_res20[0] & 0xffffff00;
          `TCheckedPointerIterator<TArrayView<TTuple<int,int,float>_const_,int>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (puVar19 == puVar20) break;
        local_1b4 = (uint)this->_padding_;
        local_1b0 = *(undefined4 *)(puVar19 + 1);
        local_160 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_188 = (undefined8 *)this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar5 = *puVar19;
        pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
        ApplyLongRangeConstraintsStiffnessScaleWeightmaps
                  (pTVar14->DataPtr,uVar5,lVar4,lVar3,local_188,local_160,local_1b0,local_1b4);
        puVar19 = puVar19 + 2;
        uVar15 = (ulonglong)local_1a8 & 0xffffffff;
      }
    }
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (cVar18 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143c8b5e0

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l21::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TTuple<int,int,float> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> local_48 [5];
  
  pTVar5 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  pTVar6 = Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
                     (*(FPBDLongRangeConstraintsBase **)this,local_48,
                      *(FSolverParticles **)((longlong)this + 8),pTVar5,
                      *(float *)((longlong)this + 0x1c));
  fVar1 = *(float *)((longlong)this + 0x18);
  fVar2 = *(float *)pTVar6;
  fVar3 = *(float *)&pTVar6->field_0x4;
  fVar4 = *(float *)&pTVar6->field_0x8;
  pTVar6 = Chaos::Softs::FSolverParticles::P
                     (*(FSolverParticles **)((longlong)this + 8),
                      *(int *)(*(longlong *)this + 0x10) + *(int *)&pTVar5->field_0x4);
  *(float *)pTVar6 = fVar1 * fVar2 + *(float *)pTVar6;
  *(float *)&pTVar6->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar6->field_0x4;
  *(float *)&pTVar6->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar6->field_0x8;
  return;
}

// operator() @ 143c8b6a0

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l21::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  TTuple<int,int,float> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> local_48 [5];
  
  pTVar10 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                      (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                       param_1);
  pTVar11 = Chaos::Softs::FPBDLongRangeConstraintsBase::
            GetDelta<Chaos::Softs::FSolverParticlesRange>
                      (*(FPBDLongRangeConstraintsBase **)this,local_48,
                       *(FSolverParticlesRange **)((longlong)this + 8),pTVar10,
                       *(float *)((longlong)this + 0x1c));
  fVar1 = *(float *)((longlong)this + 0x18);
  lVar7 = *(longlong *)((longlong)this + 8);
  fVar2 = *(float *)pTVar11;
  fVar3 = *(float *)&pTVar11->field_0x4;
  fVar4 = *(float *)&pTVar11->field_0x8;
  iVar5 = *(int *)(*(longlong *)this + 0x10);
  iVar6 = *(int *)&pTVar10->field_0x4;
  if (*(longlong *)(lVar7 + 8) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Chaos::Softs::FSolverParticles::P
                      (*(FSolverParticles **)(lVar7 + 8),*(int *)(lVar7 + 0x10) + iVar5 + iVar6);
  *(float *)pTVar11 = fVar1 * fVar2 + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar11->field_0x8;
  return;
}

// operator() @ 143c8b9a0

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l36::<lambda_2>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TTuple<int,int,float> *pTVar5;
  TVector<float,3> *pTVar6;
  float fVar7;
  TVector<float,3> local_48 [5];
  
  pTVar5 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar4 = *(int *)&pTVar5->field_0x4;
  fVar7 = Chaos::Softs::FPBDWeightMap::operator[]((FPBDWeightMap *)(*(longlong *)this + 0x60),iVar4)
  ;
  pTVar6 = Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
                     (*(FPBDLongRangeConstraintsBase **)this,local_48,
                      *(FSolverParticles **)((longlong)this + 8),pTVar5,fVar7);
  fVar7 = *(float *)((longlong)this + 0x18);
  fVar1 = *(float *)pTVar6;
  fVar2 = *(float *)&pTVar6->field_0x4;
  fVar3 = *(float *)&pTVar6->field_0x8;
  pTVar6 = Chaos::Softs::FSolverParticles::P
                     (*(FSolverParticles **)((longlong)this + 8),
                      *(int *)(*(longlong *)this + 0x10) + iVar4);
  *(float *)pTVar6 = fVar7 * fVar1 + *(float *)pTVar6;
  *(float *)&pTVar6->field_0x4 = fVar7 * fVar2 + *(float *)&pTVar6->field_0x4;
  *(float *)&pTVar6->field_0x8 = fVar7 * fVar3 + *(float *)&pTVar6->field_0x8;
  return;
}

// operator() @ 143c8ba70

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l36::
<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TTuple<int,int,float> *pTVar9;
  TVector<float,3> *pTVar10;
  float fVar11;
  TVector<float,3> local_48 [5];
  
  pTVar9 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar4 = *(int *)&pTVar9->field_0x4;
  fVar11 = Chaos::Softs::FPBDWeightMap::operator[]
                     ((FPBDWeightMap *)(*(longlong *)this + 0x60),iVar4);
  pTVar10 = Chaos::Softs::FPBDLongRangeConstraintsBase::
            GetDelta<Chaos::Softs::FSolverParticlesRange>
                      (*(FPBDLongRangeConstraintsBase **)this,local_48,
                       *(FSolverParticlesRange **)((longlong)this + 8),pTVar9,fVar11);
  fVar11 = *(float *)((longlong)this + 0x18);
  lVar6 = *(longlong *)((longlong)this + 8);
  fVar1 = *(float *)pTVar10;
  fVar2 = *(float *)&pTVar10->field_0x4;
  fVar3 = *(float *)&pTVar10->field_0x8;
  iVar5 = *(int *)(*(longlong *)this + 0x10);
  if (*(longlong *)(lVar6 + 8) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = Chaos::Softs::FSolverParticles::P
                      (*(FSolverParticles **)(lVar6 + 8),*(int *)(lVar6 + 0x10) + iVar4 + iVar5);
  *(float *)pTVar10 = fVar11 * fVar1 + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar11 * fVar2 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar11 * fVar3 + *(float *)&pTVar10->field_0x8;
  return;
}

// operator() @ 143c8bc80

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_3>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TTuple<int,int,float> *pTVar5;
  TVector<float,3> *pTVar6;
  float fVar7;
  TVector<float,3> local_48 [5];
  
  pTVar5 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar4 = *(int *)&pTVar5->field_0x4;
  fVar7 = Chaos::Softs::FPBDWeightMap::operator[]((FPBDWeightMap *)(*(longlong *)this + 0x18),iVar4)
  ;
  pTVar6 = Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
                     (*(FPBDLongRangeConstraintsBase **)this,local_48,
                      *(FSolverParticles **)((longlong)this + 8),pTVar5,
                      *(float *)((longlong)this + 0x18));
  fVar1 = *(float *)pTVar6;
  fVar2 = *(float *)&pTVar6->field_0x4;
  fVar3 = *(float *)&pTVar6->field_0x8;
  pTVar6 = Chaos::Softs::FSolverParticles::P
                     (*(FSolverParticles **)((longlong)this + 8),
                      *(int *)(*(longlong *)this + 0x10) + iVar4);
  *(float *)pTVar6 = fVar7 * fVar1 + *(float *)pTVar6;
  *(float *)&pTVar6->field_0x4 = fVar7 * fVar2 + *(float *)&pTVar6->field_0x4;
  *(float *)&pTVar6->field_0x8 = fVar7 * fVar3 + *(float *)&pTVar6->field_0x8;
  return;
}

// operator() @ 143c8bd50

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
<lambda_3>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TTuple<int,int,float> *pTVar9;
  TVector<float,3> *pTVar10;
  float fVar11;
  TVector<float,3> local_48 [5];
  
  pTVar9 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar4 = *(int *)&pTVar9->field_0x4;
  fVar11 = Chaos::Softs::FPBDWeightMap::operator[]
                     ((FPBDWeightMap *)(*(longlong *)this + 0x18),iVar4);
  pTVar10 = Chaos::Softs::FPBDLongRangeConstraintsBase::
            GetDelta<Chaos::Softs::FSolverParticlesRange>
                      (*(FPBDLongRangeConstraintsBase **)this,local_48,
                       *(FSolverParticlesRange **)((longlong)this + 8),pTVar9,
                       *(float *)((longlong)this + 0x18));
  lVar6 = *(longlong *)((longlong)this + 8);
  fVar1 = *(float *)pTVar10;
  fVar2 = *(float *)&pTVar10->field_0x4;
  fVar3 = *(float *)&pTVar10->field_0x8;
  iVar5 = *(int *)(*(longlong *)this + 0x10);
  if (*(longlong *)(lVar6 + 8) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = Chaos::Softs::FSolverParticles::P
                      (*(FSolverParticles **)(lVar6 + 8),*(int *)(lVar6 + 0x10) + iVar4 + iVar5);
  *(float *)pTVar10 = fVar11 * fVar1 + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar11 * fVar2 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar11 * fVar3 + *(float *)&pTVar10->field_0x8;
  return;
}

// operator() @ 143c8be60

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TTuple<int,int,float> *pTVar4;
  TVector<float,3> *pTVar5;
  float fVar6;
  float fVar7;
  TVector<float,3> local_48 [5];
  
  pTVar4 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar3 = *(int *)&pTVar4->field_0x4;
  fVar6 = Chaos::Softs::FPBDWeightMap::operator[]((FPBDWeightMap *)(*(longlong *)this + 0x18),iVar3)
  ;
  fVar7 = Chaos::Softs::FPBDWeightMap::operator[]((FPBDWeightMap *)(*(longlong *)this + 0x60),iVar3)
  ;
  pTVar5 = Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
                     (*(FPBDLongRangeConstraintsBase **)this,local_48,
                      *(FSolverParticles **)((longlong)this + 8),pTVar4,fVar7);
  fVar7 = *(float *)pTVar5;
  fVar1 = *(float *)&pTVar5->field_0x4;
  fVar2 = *(float *)&pTVar5->field_0x8;
  pTVar5 = Chaos::Softs::FSolverParticles::P
                     (*(FSolverParticles **)((longlong)this + 8),
                      *(int *)(*(longlong *)this + 0x10) + iVar3);
  *(float *)pTVar5 = fVar6 * fVar7 + *(float *)pTVar5;
  *(float *)&pTVar5->field_0x4 = fVar6 * fVar1 + *(float *)&pTVar5->field_0x4;
  *(float *)&pTVar5->field_0x8 = fVar6 * fVar2 + *(float *)&pTVar5->field_0x8;
  return;
}

// operator() @ 143c8bf40

void __thiscall
`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::
<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TTuple<int,int,float> *pTVar8;
  TVector<float,3> *pTVar9;
  float fVar10;
  float fVar11;
  TVector<float,3> local_48 [5];
  
  pTVar8 = TArrayView<TTuple<int,int,float>_const_,int>::operator[]
                     (*(TArrayView<TTuple<int,int,float>_const_,int> **)((longlong)this + 0x10),
                      param_1);
  iVar3 = *(int *)&pTVar8->field_0x4;
  fVar10 = Chaos::Softs::FPBDWeightMap::operator[]
                     ((FPBDWeightMap *)(*(longlong *)this + 0x18),iVar3);
  fVar11 = Chaos::Softs::FPBDWeightMap::operator[]
                     ((FPBDWeightMap *)(*(longlong *)this + 0x60),iVar3);
  pTVar9 = Chaos::Softs::FPBDLongRangeConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
                     (*(FPBDLongRangeConstraintsBase **)this,local_48,
                      *(FSolverParticlesRange **)((longlong)this + 8),pTVar8,fVar11);
  lVar5 = *(longlong *)((longlong)this + 8);
  fVar11 = *(float *)pTVar9;
  fVar1 = *(float *)&pTVar9->field_0x4;
  fVar2 = *(float *)&pTVar9->field_0x8;
  iVar4 = *(int *)(*(longlong *)this + 0x10);
  if (*(longlong *)(lVar5 + 8) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar9 = Chaos::Softs::FSolverParticles::P
                     (*(FSolverParticles **)(lVar5 + 8),*(int *)(lVar5 + 0x10) + iVar3 + iVar4);
  *(float *)pTVar9 = fVar10 * fVar11 + *(float *)pTVar9;
  *(float *)&pTVar9->field_0x4 = fVar10 * fVar1 + *(float *)&pTVar9->field_0x4;
  *(float *)&pTVar9->field_0x8 = fVar10 * fVar2 + *(float *)&pTVar9->field_0x8;
  return;
}

// SetProperties @ 143caaa10

void __thiscall
Chaos::Softs::FPBDLongRangeConstraints::SetProperties
          (FPBDLongRangeConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  TVector<float,2> TVar3;
  ECollectionPropertyFlags EVar4;
  bool bVar5;
  byte bVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  FPBDWeightMap *pFVar9;
  TArrayView<unsigned_char_const_,int> *pTVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  undefined8 local_118;
  TVector2<float>_u_0 local_108;
  TArrayView<float_const_,int> local_100;
  TArrayView<float_const_,int> local_f0;
  undefined1 local_e0 [40];
  undefined8 local_b8;
  bool local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  FPBDWeightMap local_98 [2];
  
  iVar1 = (this->TetherStiffnessIndex).Index;
  if (iVar1 != -1) {
    pTVar10 = &param_1->FlagsArray;
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar10);
    if (((EVar4 & Animatable) != None) &&
       (EVar4 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->TetherStiffnessIndex).Index,pTVar10), (char)EVar4 < '\0'))
    {
      if (((this->TetherStiffnessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TetherStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                             ,0x72,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->TetherStiffnessIndex).Index;
      local_118._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->HighValueArray);
      local_118._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->LowValueArray);
      if (((this->TetherStiffnessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TetherStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                             ,0x72,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->TetherStiffnessIndex).Index,pTVar10);
      if ((EVar4 & StringDirty) == None) {
        if (__real_3f800000 <= (float)local_118) {
          local_118._0_4_ = __real_3f800000;
        }
        if (__real_3f800000 <= local_118._4_4_) {
          local_118._4_4_ = __real_3f800000;
        }
        if ((float)local_118 <= 0.0) {
          local_118._0_4_ = 0.0;
        }
        if (local_118._4_4_ <= 0.0) {
          local_118._4_4_ = 0.0;
        }
        if (((float)local_118 == *(float *)&this->_padding_) &&
           (local_118._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
          this->_padding_ = (longlong)local_118;
          *(char *)&this->_padding_ = (char)this->_padding_;
        }
        else {
          this->_padding_ = (longlong)local_118;
          *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
        }
      }
      else {
        if (((this->TetherStiffnessIndex).Index == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TetherStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                               ,0x72,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->TetherStiffnessIndex).Index,&param_1->StringValueArray);
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar7);
        if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_100.DataPtr = (float *)0x0;
          local_100._8_8_ = (ulonglong)(uint)local_100._12_4_ << 0x20;
        }
        else {
          local_100.DataPtr = *(float **)&pTVar8->field_0x10;
          local_100._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
        }
        local_108 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap
                  ((FPBDWeightMap *)local_e0,(TVector<float,2> *)&local_108._s_0,&local_100,iVar1,
                   0x10);
        if (__real_3f800000 <= (float)local_118) {
          local_118._0_4_ = __real_3f800000;
        }
        if (__real_3f800000 <= local_118._4_4_) {
          local_118._4_4_ = __real_3f800000;
        }
        local_e0._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        local_a8 = 0x447a0000;
        if ((float)local_118 <= 0.0) {
          local_118._0_4_ = 0.0;
        }
        local_a4 = 0x40dd0c55;
        if (local_118._4_4_ <= 0.0) {
          local_118._4_4_ = 0.0;
        }
        local_9c = 0;
        if (((float)local_b8 == (float)local_118) && (local_b8._4_4_ == local_118._4_4_)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        local_b0 = (bool)(local_b0 | bVar6);
        local_b8 = local_118;
        FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_e0);
        *(undefined4 *)&this->_padding_ = local_a8;
        *(undefined4 *)&this->_padding_ = local_a4._4_4_;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_a4;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_9c;
        if ((FScriptContainerElement *)local_e0._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e0._24_8_);
        }
        if ((FScriptContainerElement *)local_e0._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e0._8_8_);
        }
      }
    }
  }
  pTVar10 = &param_1->FlagsArray;
  iVar1 = (this->TetherScaleIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->TetherScaleIndex).Index,pTVar10), (char)EVar4 < '\0')) {
    if (((this->TetherScaleIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TetherScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                           ,0x73,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->TetherScaleIndex).Index;
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (__real_41200000 <= fVar11) {
      fVar11 = __real_41200000;
    }
    if (__real_41200000 <= fVar12) {
      fVar12 = __real_41200000;
    }
    if (fVar11 <= __real_3c23d70a) {
      fVar11 = __real_3c23d70a;
    }
    if (fVar12 <= __real_3c23d70a) {
      fVar12 = __real_3c23d70a;
    }
    local_res8._4_4_ = fVar11 * param_3;
    local_res8._0_4_ = fVar12 * param_3;
    TVar3 = local_res8;
    if (((this->TetherScaleIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TetherScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                           ,0x73,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->TetherScaleIndex).Index,pTVar10);
    if ((EVar4 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&this->_padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar6;
      this->_padding_ = (longlong)TVar3;
    }
    else {
      if (((this->TetherScaleIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TetherScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDLongRangeConstraints.h"
                             ,0x73,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->TetherScaleIndex).Index,&param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_f0.DataPtr = (float *)0x0;
        local_f0._8_8_ = (ulonglong)(uint)local_f0._12_4_ << 0x20;
      }
      else {
        local_f0.DataPtr = *(float **)&pTVar8->field_0x10;
        local_f0._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      pFVar9 = FPBDWeightMap::FPBDWeightMap
                         (local_98,(TVector<float,2> *)&local_res8,&local_f0,iVar1,0x10);
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,pFVar9);
      if (local_98[0].Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98[0].Table.AllocatorInstance.Data);
      }
      if (local_98[0].Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98[0].Indices.AllocatorInstance.Data);
      }
    }
  }
  return;
}

