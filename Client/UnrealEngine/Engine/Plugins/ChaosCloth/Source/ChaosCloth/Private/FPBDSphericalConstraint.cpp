// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 7

// Apply<Chaos::Softs::FSolverParticles> @ 14db7c300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSphericalConstraint::Apply<Chaos::Softs::FSolverParticles>
          (FPBDSphericalConstraint *this,FSolverParticles *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_PBD_Spherical> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  TFunctionRef<void___cdecl(int)> *pTVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res20 [2];
  LARGE_INTEGER local_f8;
  FName local_f0;
  FName local_e8;
  FStatMessage local_d8;
  FScriptContainerElement *local_c8;
  int local_c0;
  code *local_b8;
  FPBDSphericalConstraint **local_b0;
  FScriptContainerElement *local_a8;
  int local_a0;
  code *local_98;
  FPBDSphericalConstraint **local_90;
  FPBDSphericalConstraint *local_88;
  FSolverParticles *local_80;
  float local_78;
  FScriptContainerElement **local_70;
  FPBDSphericalConstraint *local_68;
  FSolverParticles *local_60;
  float local_58;
  FScriptContainerElement **local_50;
  FName local_48 [4];
  
  FVar11 = StatPtr_STAT_PBD_Spherical;
  if (StatPtr_STAT_PBD_Spherical == (FThreadSafeStaticStat<FStat_STAT_PBD_Spherical>)0x0) {
    pFVar10 = ::FName::FName(local_48,"STAT_PBD_Spherical");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_PBD_Spherical>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Spherical,*pFVar10,
                        L"Chaos PBD Spherical Constraints","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar14.Value;
        local_f0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                   ,0x56);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.s.LowPart = FVar14.Value;
      local_f8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14db7c44e;
    }
  }
  bVar7 = false;
  FVar15 = local_e8;
LAB_14db7c44e:
  if (bChaos_Spherical_ISPC_Enabled == false) {
    pTVar3 = this->AnimationPositions;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if ((this->SphereRadii).ArrayNum == this->ParticleCount) {
      iVar2 = pTVar3->ArrayNum;
      local_c8 = pFVar4;
      if (iVar2 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_70 = &local_c8;
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_b8;
      local_b0 = &local_88;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_c0 = iVar2;
      local_88 = this;
      local_80 = param_1;
      local_78 = param_2;
    }
    else {
      iVar2 = pTVar3->ArrayNum;
      local_a8 = pFVar4;
      if (iVar2 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_50 = &local_a8;
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_98;
      local_90 = &local_68;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_a0 = iVar2;
      local_68 = this;
      local_60 = param_1;
      local_58 = param_2;
    }
    PhysicsParallelFor(this->ParticleCount,pTVar13,false);
  }
  else {
    ApplyHelperISPC<Chaos::Softs::FSolverParticles>(this,param_1,param_2);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 14db7d820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSphericalConstraint::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDSphericalConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PBD_Spherical> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  LARGE_INTEGER local_res20;
  FStatMessage local_88;
  FName local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  FPBDSphericalConstraint *local_58;
  FSolverParticlesRange *local_50;
  float local_48;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_40;
  
  FVar6 = StatPtr_STAT_PBD_Spherical;
  if (StatPtr_STAT_PBD_Spherical == (FThreadSafeStaticStat<FStat_STAT_PBD_Spherical>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_88,"STAT_PBD_Spherical");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PBD_Spherical>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Spherical,*pFVar5,
                       L"Chaos PBD Spherical Constraints","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar8.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                   ,0x56);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar8.Value;
      local_res20.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_14db7d96c;
    }
  }
  bVar3 = false;
  FVar9 = local_78;
LAB_14db7d96c:
  if (bChaos_Spherical_ISPC_Enabled == false) {
    if ((this->SphereRadii).ArrayNum == this->ParticleCount) {
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_68,
                 this->AnimationPositions);
      local_88.StatData.Pad =
           (uchar  [8])
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
           ::Call;
    }
    else {
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_68,
                 this->AnimationPositions);
      local_88.StatData.Pad =
           (uchar  [8])
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
           ::Call;
    }
    local_40 = &local_68;
    local_88.NameAndInfo = (FStatNameAndInfo)&local_58;
    local_58 = this;
    local_50 = param_1;
    local_48 = param_2;
    PhysicsParallelFor(this->ParticleCount,(TFunctionRef<void___cdecl(int)> *)&local_88,false);
  }
  else {
    ApplyHelperISPC<Chaos::Softs::FSolverParticlesRange>(this,param_1,param_2);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar9 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res20);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FPBDSphericalConstraint @ 14db96170

FPBDSphericalConstraint * __thiscall
Chaos::Softs::FPBDSphericalConstraint::FPBDSphericalConstraint
          (FPBDSphericalConstraint *this,uint param_1,uint param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,FCollectionPropertyConstFacade *param_5,float param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  FCollectionPropertyConstFacade *this_00;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  int *piVar6;
  ForAnyElementType FVar7;
  float fVar8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->AnimationPositions = param_3;
  pFVar5 = ::FName::ToString(&MaxDistanceName,&local_38);
  pFVar5 = ::FString::FString(&local_28,pFVar5);
  this_00 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_48,&MaxDistanceName,(<lambda_1> *)&param_5,pFVar5,(int *)0x0);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar7.Data);
  iVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_4,uVar3,&local_48);
  if ((iVar4 == -1) || (lVar1 = *(longlong *)param_4 + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    (this->SphereRadii).DataPtr = (float *)0x0;
    (this->SphereRadii).ArrayNum = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    (this->SphereRadii).DataPtr = *(float **)(lVar1 + 0x10);
    *(undefined8 *)&(this->SphereRadii).ArrayNum = uVar2;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->Scale = param_6;
  this->ParticleOffset = param_1;
  this->ParticleCount = param_2;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,MaxDistanceName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (this_00,*piVar6,&this_00->LowValueArray);
  }
  this->MaxDistanceBase = fVar8;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,MaxDistanceName);
  fVar8 = __real_3f800000;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (this_00,*piVar6,&this_00->HighValueArray);
  }
  this->MaxDistanceRange = fVar8 - this->MaxDistanceBase;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_00->KeyNameIndices,MaxDistanceName);
  if (piVar6 == (int *)0x0) {
    (this->MaxDistanceIndex).Index = -1;
  }
  else {
    (this->MaxDistanceIndex).Index = *piVar6;
  }
  return this;
}

// operator() @ 14dba18c0

void __thiscall
`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticles>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar8 = *(int *)(*(longlong *)this + 0x18) + param_1;
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),iVar8);
  if (*pfVar5 != 0.0) {
    lVar4 = *(longlong *)this;
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar4 + 8),param_1);
    fVar10 = (*(float *)(lVar4 + 0x28) * *pfVar5 + *(float *)(lVar4 + 0x24)) *
             *(float *)(*(longlong *)this + 0x20);
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        iVar8);
    pTVar7 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 8),iVar8);
    fVar1 = *(float *)&pTVar6->field_0x4;
    fVar2 = *(float *)pTVar6;
    fVar3 = *(float *)&pTVar6->field_0x8;
    fVar12 = *(float *)&pTVar7->field_0x4 - fVar1;
    fVar13 = *(float *)pTVar7 - fVar2;
    fVar11 = *(float *)&pTVar7->field_0x8 - fVar3;
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
    if (fVar10 * fVar10 + __real_322bcc77 < fVar9) {
      fVar10 = fVar10 / SQRT(fVar9);
      pTVar6 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 8),iVar8);
      *(float *)pTVar6 = fVar10 * fVar13 + fVar2;
      *(float *)&pTVar6->field_0x4 = fVar10 * fVar12 + fVar1;
      *(float *)&pTVar6->field_0x8 = fVar10 * fVar11 + fVar3;
    }
  }
  return;
}

// operator() @ 14dba1a60

void __thiscall
`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticlesRange>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = *(longlong *)((longlong)this + 8);
  iVar10 = *(int *)(*(longlong *)this + 0x18) + param_1;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar7 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar4 + 8),*(int *)(lVar4 + 0x10) + iVar10);
  if (*pfVar7 != 0.0) {
    lVar4 = *(longlong *)this;
    pfVar7 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar4 + 8),param_1);
    fVar12 = (*(float *)(lVar4 + 0x28) * *pfVar7 + *(float *)(lVar4 + 0x24)) *
             *(float *)(*(longlong *)this + 0x20);
    pTVar8 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        iVar10);
    lVar4 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar4 + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar9 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar4 + 8),*(int *)(lVar4 + 0x10) + iVar10);
    fVar1 = *(float *)&pTVar8->field_0x4;
    fVar2 = *(float *)pTVar8;
    fVar3 = *(float *)&pTVar8->field_0x8;
    fVar14 = *(float *)&pTVar9->field_0x4 - fVar1;
    fVar15 = *(float *)pTVar9 - fVar2;
    fVar13 = *(float *)&pTVar9->field_0x8 - fVar3;
    fVar11 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
    if (fVar12 * fVar12 + __real_322bcc77 < fVar11) {
      fVar12 = fVar12 / SQRT(fVar11);
      pTVar8 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),iVar10);
      *(float *)pTVar8 = fVar12 * fVar15 + fVar2;
      *(float *)&pTVar8->field_0x4 = fVar12 * fVar14 + fVar1;
      *(float *)&pTVar8->field_0x8 = fVar12 * fVar13 + fVar3;
    }
  }
  return;
}

// operator() @ 14dba21c0

void __thiscall
`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticles>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar7 = *(int *)(*(longlong *)this + 0x18) + param_1;
  pfVar4 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 8),iVar7);
  if (*pfVar4 != 0.0) {
    fVar9 = *(float *)(*(longlong *)this + 0x24) * *(float *)(*(longlong *)this + 0x20);
    pTVar5 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        iVar7);
    pTVar6 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 8),iVar7);
    fVar1 = *(float *)&pTVar5->field_0x4;
    fVar2 = *(float *)pTVar5;
    fVar3 = *(float *)&pTVar5->field_0x8;
    fVar11 = *(float *)&pTVar6->field_0x4 - fVar1;
    fVar12 = *(float *)pTVar6 - fVar2;
    fVar10 = *(float *)&pTVar6->field_0x8 - fVar3;
    fVar8 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar9 * fVar9 + __real_322bcc77 < fVar8) {
      fVar9 = fVar9 / SQRT(fVar8);
      pTVar5 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 8),iVar7);
      *(float *)pTVar5 = fVar9 * fVar12 + fVar2;
      *(float *)&pTVar5->field_0x4 = fVar9 * fVar11 + fVar1;
      *(float *)&pTVar5->field_0x8 = fVar9 * fVar10 + fVar3;
    }
  }
  return;
}

// operator() @ 14dba2340

void __thiscall
`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticlesRange>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = *(longlong *)((longlong)this + 8);
  iVar10 = *(int *)(*(longlong *)this + 0x18) + param_1;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar7 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar4 + 8),*(int *)(lVar4 + 0x10) + iVar10);
  if (*pfVar7 != 0.0) {
    fVar12 = *(float *)(*(longlong *)this + 0x24) * *(float *)(*(longlong *)this + 0x20);
    pTVar8 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        iVar10);
    lVar4 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar4 + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar9 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar4 + 8),*(int *)(lVar4 + 0x10) + iVar10);
    fVar1 = *(float *)&pTVar8->field_0x4;
    fVar2 = *(float *)pTVar8;
    fVar3 = *(float *)&pTVar8->field_0x8;
    fVar14 = *(float *)&pTVar9->field_0x4 - fVar1;
    fVar15 = *(float *)pTVar9 - fVar2;
    fVar13 = *(float *)&pTVar9->field_0x8 - fVar3;
    fVar11 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
    if (fVar12 * fVar12 + __real_322bcc77 < fVar11) {
      fVar12 = fVar12 / SQRT(fVar11);
      pTVar8 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),iVar10);
      *(float *)pTVar8 = fVar12 * fVar15 + fVar2;
      *(float *)&pTVar8->field_0x4 = fVar12 * fVar14 + fVar1;
      *(float *)&pTVar8->field_0x8 = fVar12 * fVar13 + fVar3;
    }
  }
  return;
}

