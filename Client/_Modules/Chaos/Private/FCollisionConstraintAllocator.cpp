// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 22

// operator() @ 1439c3aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints'::__l7::<lambda_1>::
operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Collisions_SubCCDProcessNewConstraints ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_Collisions_SubCCDProcessNewConstraints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SubCCDProcessNewConstraints,
                 *pFVar10,L"STAT_Collisions_SubCCDProcessNewConstraints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_Collisions_SubCCDProcessNewConstraints;
  if (StatPtr_STAT_Collisions_SubCCDProcessNewConstraints ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
       )0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_Collisions_SubCCDProcessNewConstraints");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Collisions_SubCCDProcessNewConstraints,*pFVar10,
                          L"STAT_Collisions_SubCCDProcessNewConstraints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0xb6);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1439c3c24;
    }
  }
  bVar6 = false;
  FVar13 = local_60;
LAB_1439c3c24:
  uVar16 = (ulonglong)*(int *)((longlong)this + 8);
  if (*(int *)((longlong)this + 8) < *(int *)((longlong)this + 0xc)) {
    lVar14 = uVar16 * 8;
    do {
      lVar3 = *(longlong *)this;
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < *(int *)(lVar3 + 0x48)) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar2 = (longlong *)(lVar14 + *(longlong *)(lVar3 + 0x40));
      lVar14 = lVar14 + 8;
      *(uint *)(*plVar2 + 0x154) = uVar15;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < *(int *)((longlong)this + 0xc));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 1439c3e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints'::__l7::<lambda_1>::
operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubProcessNewConstraints>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  longlong local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Collisions_SubProcessNewConstraints ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubProcessNewConstraints>
         )0x0) {
      pFVar11 = ::FName::FName(&local_res20,"STAT_Collisions_SubProcessNewConstraints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SubProcessNewConstraints,
                 *pFVar11,L"STAT_Collisions_SubProcessNewConstraints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_Collisions_SubProcessNewConstraints;
  if (StatPtr_STAT_Collisions_SubProcessNewConstraints ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubProcessNewConstraints>
       )0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_Collisions_SubProcessNewConstraints");
    FVar12 = (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_7_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_Collisions_SubProcessNewConstraints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Collisions_SubProcessNewConstraints,*pFVar11,
                          L"STAT_Collisions_SubProcessNewConstraints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0x79);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1439c3fe4;
    }
  }
  bVar6 = false;
  FVar14 = local_58;
LAB_1439c3fe4:
  uVar16 = (ulonglong)*(int *)((longlong)this + 8);
  if (*(int *)((longlong)this + 8) < *(int *)((longlong)this + 0xc)) {
    lVar17 = uVar16 * 8;
    do {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < (int)plVar2[1]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68 = *(longlong *)(lVar17 + *plVar2);
      *(undefined4 *)(local_68 + 0x14c) = *(undefined4 *)(*(longlong *)this + 0x50);
      *(undefined4 *)(local_68 + 0x154) = 0xffffffff;
      *(uint *)(local_68 + 0x150) = (uVar15 ^ *(uint *)(local_68 + 0x150)) & 0x80000000 ^ uVar15;
      if ((*(ushort *)(local_68 + 0x374) >> 9 & 1) != 0) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
        if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar10 + 1;
        *(longlong *)(pFVar3->Data + (longlong)iVar10 * 8) = local_68;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      lVar17 = lVar17 + 8;
    } while ((int)(uVar15 + 1) < *(int *)((longlong)this + 0xc));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// AddActiveConstraint @ 1439c52b0

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraint
          (FCollisionConstraintAllocator *this,FPBDCollisionConstraint *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPBDCollisionConstraint *pFStackX_10;
  
  if ((param_1->ContainerCookie).LastUsedEpoch == this->CurrentEpoch) {
    return;
  }
  iVar7 = this->CurrentEpoch;
  (param_1->ContainerCookie).ConstraintIndex = -1;
  (param_1->ContainerCookie).LastUsedEpoch = iVar7;
  (param_1->ContainerCookie).CCDConstraintIndex = -1;
  pFVar3 = (this->ActiveConstraints).AllocatorInstance.Data;
  pFStackX_10 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&pFStackX_10) &&
     ((FScriptContainerElement *)&pFStackX_10 <
      pFVar3 + (longlong)(this->ActiveConstraints).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = (this->ActiveConstraints).ArrayNum;
  piVar1 = &(this->ActiveConstraints).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ActiveConstraints).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->ActiveConstraints).AllocatorInstance.Data;
  (this->ActiveConstraints).ArrayNum = uVar6 + 1;
  *(FPBDCollisionConstraint **)(pFVar3 + (longlong)(int)uVar6 * 8) = pFStackX_10;
  *(uint *)&(param_1->ContainerCookie).field_0x10 =
       (uVar6 ^ *(uint *)&(param_1->ContainerCookie).field_0x10) & 0x80000000 ^ uVar6;
  if (((pFStackX_10->Flags).Bits >> 9 & 1) != 0) {
    pFVar3 = (this->ActiveCCDConstraints).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&pFStackX_10) &&
       ((FScriptContainerElement *)&pFStackX_10 <
        pFVar3 + (longlong)(this->ActiveCCDConstraints).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->ActiveCCDConstraints).ArrayNum;
    piVar1 = &(this->ActiveCCDConstraints).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ActiveCCDConstraints).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->ActiveCCDConstraints).AllocatorInstance.Data;
    (this->ActiveCCDConstraints).ArrayNum = iVar7 + 1;
    *(FPBDCollisionConstraint **)(pFVar3 + (longlong)iVar7 * 8) = pFStackX_10;
    (param_1->ContainerCookie).CCDConstraintIndex = iVar7;
  }
  return;
}

// AddActiveConstraintImpl @ 1439c52d0

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::AddActiveConstraintImpl
          (FCollisionConstraintAllocator *this,FPBDCollisionConstraint *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPBDCollisionConstraint *local_res10;
  
  iVar7 = this->CurrentEpoch;
  (param_1->ContainerCookie).ConstraintIndex = -1;
  (param_1->ContainerCookie).LastUsedEpoch = iVar7;
  (param_1->ContainerCookie).CCDConstraintIndex = -1;
  pFVar3 = (this->ActiveConstraints).AllocatorInstance.Data;
  local_res10 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar3 + (longlong)(this->ActiveConstraints).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = (this->ActiveConstraints).ArrayNum;
  piVar1 = &(this->ActiveConstraints).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ActiveConstraints).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->ActiveConstraints).AllocatorInstance.Data;
  (this->ActiveConstraints).ArrayNum = uVar6 + 1;
  *(FPBDCollisionConstraint **)(pFVar3 + (longlong)(int)uVar6 * 8) = local_res10;
  *(uint *)&(param_1->ContainerCookie).field_0x10 =
       (uVar6 ^ *(uint *)&(param_1->ContainerCookie).field_0x10) & 0x80000000 ^ uVar6;
  if (((local_res10->Flags).Bits >> 9 & 1) != 0) {
    pFVar3 = (this->ActiveCCDConstraints).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 <
        pFVar3 + (longlong)(this->ActiveCCDConstraints).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->ActiveCCDConstraints).ArrayNum;
    piVar1 = &(this->ActiveCCDConstraints).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ActiveCCDConstraints).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->ActiveCCDConstraints).AllocatorInstance.Data;
    (this->ActiveCCDConstraints).ArrayNum = iVar7 + 1;
    *(FPBDCollisionConstraint **)(pFVar3 + (longlong)iVar7 * 8) = local_res10;
    (param_1->ContainerCookie).CCDConstraintIndex = iVar7;
  }
  return;
}

// EndDetectCollisions @ 1439cba20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::EndDetectCollisions
          (FCollisionConstraintAllocator *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this_00;
  
  if (this->bInCollisionDetectionPhase == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInCollisionDetectionPhase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                       ,0xf3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bInCollisionDetectionPhase = false;
  bVar4 = ShouldExecuteTasksInParallel(2);
  if (bVar4) {
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewItems'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp(226)"
                 ,High,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewItems'::`5'::<lambda_1>_>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      ProcessNewConstraints(this);
      UE::Tasks::Private::FTaskBase::Wait(this_00);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
      return;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    ProcessNewConstraints(this);
    return;
  }
  ProcessNewMidPhases(this);
  ProcessNewConstraints(this);
  return;
}

// ProcessNewCcdConstraints @ 1439d6af0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints
          (FCollisionConstraintAllocator *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FTaskGraphInterface *pFVar13;
  FTaskBase *this_00;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_9_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
  FVar15;
  FTaskBase *this_01;
  FTaskBase *pFVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  FTaskBase *pFVar20;
  uint uVar21;
  FName local_res8;
  FColor_u_0 local_res20 [2];
  FTaskBase *local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_58;
  
  iVar11 = MaxNumWorkers;
  if (GSingleThreadedPhysics == 0) {
    pFVar13 = FTaskGraphInterface::Get();
    iVar10 = (**(code **)((longlong)*pFVar13 + 0x20))(pFVar13);
    if (iVar10 < iVar11) {
      iVar11 = iVar10;
    }
  }
  else {
    iVar11 = 1;
  }
  iVar10 = (this->ActiveCCDConstraints).ArrayNum;
  iVar17 = iVar10;
  if (iVar11 < iVar10) {
    iVar17 = iVar11;
  }
  iVar11 = 1;
  if (1 < iVar17) {
    iVar11 = iVar17;
  }
  iVar11 = (iVar10 + -1 + iVar11) / iVar11;
  iVar17 = 1;
  if (1 < iVar11) {
    iVar17 = iVar11;
  }
  uVar4 = (longlong)(iVar10 + -1 + iVar17) / (longlong)iVar17;
  iVar11 = (int)uVar4;
  bVar8 = ShouldExecuteTasksInParallel(iVar11);
  pFVar16 = (FTaskBase *)0x0;
  if (bVar8) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
    }
    if (0 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar11,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
      pFVar20 = pFVar16;
      iVar19 = iVar17;
      do {
        iVar12 = iVar19;
        if (((int)pFVar20 == iVar11 + -1) && (iVar10 < iVar19)) {
          iVar12 = iVar10;
        }
        this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        this_01 = pFVar16;
        if (this_00 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints'::`7'::<lambda_1>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    (this_00,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp(180)"
                     ,High,None,None);
          this_00[1]._padding_ = (longlong)this;
          *(int *)&this_00[1]._padding_ = iVar19 - iVar17;
          *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar12;
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints'::`7'::<lambda_1>_>
                ::_vftable_;
          this_01 = this_00;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
        local_88 = this_01;
        if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = local_58.ArrayNum;
        if (local_58.ArrayNum == local_58.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
        }
        local_58.ArrayNum = iVar12 + 1;
        *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
        *(FTaskBase **)(local_58.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_88;
        if (local_88 != (FTaskBase *)0x0) {
          LOCK();
          local_88->RefCount = (atomic<unsigned_int>)((int)local_88->RefCount + 1);
          UNLOCK();
          if (local_88 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &local_88->RefCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<unsigned_int>)0x1) {
              (**(code **)local_88->_padding_)(local_88,1);
            }
          }
        }
        iVar19 = iVar19 + iVar17;
        uVar21 = (int)pFVar20 + 1;
        pFVar20 = (FTaskBase *)(ulonglong)uVar21;
      } while ((int)uVar21 < iVar11);
    }
    if (((this->ContextAllocators).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(this->ContextAllocators).AllocatorInstance.Data;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (*(int *)(lVar3 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar3 + 0x10),0,(int *)(lVar3 + 0x1c));
    }
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (&local_58,(FTimespan)0x7fffffffffffffff);
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_58.AllocatorInstance.Data);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Collisions_SubCCDProcessNewConstraints ==
        (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_9_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
         )0x0) {
      pFVar14 = ::FName::FName(&local_78,"STAT_Collisions_SubCCDProcessNewConstraints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SubCCDProcessNewConstraints,
                 *pFVar14,L"STAT_Collisions_SubCCDProcessNewConstraints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_Collisions_SubCCDProcessNewConstraints;
  if (StatPtr_STAT_Collisions_SubCCDProcessNewConstraints ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_9_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
       )0x0) {
    pFVar14 = ::FName::FName(&local_70,"STAT_Collisions_SubCCDProcessNewConstraints");
    FVar15 = (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewCcdConstraints(void)_::_9_::FStat_STAT_Collisions_SubCCDProcessNewConstraints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Collisions_SubCCDProcessNewConstraints,*pFVar14,
                          L"STAT_Collisions_SubCCDProcessNewConstraints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_res8 = *(FName *)FVar15;
  bVar8 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((local_res8.ComparisonIndex.Value.Value != 0) || (local_res8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = local_res8.ComparisonIndex.Value.Value;
        local_80.Number = local_res8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0xc5);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_res8,CycleScopeStart);
      bVar6 = true;
      goto LAB_1439d6f38;
    }
  }
  bVar6 = false;
  local_res8 = local_68;
LAB_1439d6f38:
  pFVar20 = pFVar16;
  if (0 < iVar10) {
    do {
      uVar18 = (uint)pFVar16;
      uVar21 = 0;
      if ((int)uVar18 < (this->ActiveCCDConstraints).ArrayNum) {
        uVar21 = ~uVar18 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(*(longlong *)
                 ((this->ActiveCCDConstraints).AllocatorInstance.Data + -0x58 +
                 (longlong)&(pFVar20->Prerequisites).Prerequisites) + 0x154) = uVar18;
      pFVar16 = (FTaskBase *)(ulonglong)(uVar18 + 1);
      pFVar20 = (FTaskBase *)&pFVar20->_padding_;
    } while ((int)(uVar18 + 1) < iVar10);
  }
  if (((this->ContextAllocators).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(this->ContextAllocators).AllocatorInstance.Data;
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if (*(int *)(lVar3 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar3 + 0x10),0,(int *)(lVar3 + 0x1c));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(local_res8,CycleScopeEnd);
  }
  return;
}

// ProcessNewConstraints @ 1439d7120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ProcessNewConstraints
          (FCollisionConstraintAllocator *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewConstraints(void)_::_2_::FStat_STAT_Collisions_ProcessNewConstraints>
  FVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FStatMessage local_88;
  code *local_78;
  uint *local_70;
  FMemMark local_68;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Collisions_ProcessNewConstraints ==
          (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewConstraints(void)_::_2_::FStat_STAT_Collisions_ProcessNewConstraints>
           )0x0) {
        pFVar9 = ::FName::FName(&local_a8,"STAT_Collisions_ProcessNewConstraints");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ProcessNewConstraints,
                   *pFVar9,L"STAT_Collisions_ProcessNewConstraints","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_Collisions_ProcessNewConstraints;
  if (StatPtr_STAT_Collisions_ProcessNewConstraints ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewConstraints(void)_::_2_::FStat_STAT_Collisions_ProcessNewConstraints>
       )0x0) {
    pFVar9 = ::FName::FName(&local_a0,"STAT_Collisions_ProcessNewConstraints");
    FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewConstraints(void)_::_2_::FStat_STAT_Collisions_ProcessNewConstraints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Collisions_ProcessNewConstraints,*pFVar9,
                          L"STAT_Collisions_ProcessNewConstraints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0xd1);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1439d727a;
    }
  }
  bVar6 = false;
  FVar15 = local_98;
LAB_1439d727a:
  puVar11 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = &local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar11);
  local_68.Mem = (FMemStackBase *)(pFVar12 + 2);
  local_68.Top = (local_68.Mem)->Top;
  local_68.SavedChunk = *(FTaggedMemory **)(pFVar12 + 4);
  local_68.bPopped = false;
  local_68.NextTopmostMark = *(FMemMark **)(pFVar12 + 5);
  pFVar12[5] = (FTlsAutoCleanup)&local_68;
  *(int *)(pFVar12 + 6) = *(int *)(pFVar12 + 6) + 1;
  iVar2 = (this->ContextAllocators).ArrayNum;
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(this->ContextAllocators).AllocatorInstance.Data;
    TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>::
    Append<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>
              (&this->ActiveConstraints,
               (TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)
               (lVar3 + 0x10));
    ProcessNewNonCcdConstraints
              (this,(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)
                    (lVar3 + 0x10),&this->ActiveCCDConstraints);
    ProcessNewCcdConstraints(this);
  }
  if (local_68.bPopped == false) {
    if ((local_68.Mem)->TopMark != &local_68) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_68.bPopped = true;
    (local_68.Mem)->NumMarks = (local_68.Mem)->NumMarks + -1;
    if (local_68.SavedChunk != (local_68.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_68.Mem,local_68.SavedChunk);
    }
    (local_68.Mem)->Top = local_68.Top;
    (local_68.Mem)->TopMark = local_68.NextTopmostMark;
    local_68.Top = (uchar *)0x0;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ProcessNewItems @ 1439d78b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ProcessNewItems(FCollisionConstraintAllocator *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  FTaskBase *this_00;
  
  bVar3 = ShouldExecuteTasksInParallel(2);
  if (!bVar3) {
    ProcessNewMidPhases(this);
    ProcessNewConstraints(this);
    return;
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewItems'::`5'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp(226)"
               ,High,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewItems'::`5'::<lambda_1>_>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    ProcessNewConstraints(this);
    UE::Tasks::Private::FTaskBase::Wait(this_00);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
    return;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  ProcessNewConstraints(this);
  return;
}

// ProcessNewMidPhases @ 1439d79b0

/* WARNING: Removing unreachable block (ram,0x0001439d7e91) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases
          (FCollisionConstraintAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FParticlePairMidPhase **ppFVar3;
  int iVar4;
  FName FVar5;
  longlong lVar6;
  FParticlePairMidPhase *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  FIdentityFunctor FVar13;
  bool bVar14;
  FIdentityFunctor FVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_2_::FStat_STAT_Collisions_ProcessNewMidPhases>
  FVar21;
  uint *puVar22;
  FTlsAutoCleanup *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_20_::FStat_STAT_Collisions_SortMidPhases>
  FVar24;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FParticleCollisions *pFVar25;
  FScriptContainerElement *pFVar26;
  FName FVar27;
  ForElementType<Chaos::FParticlePairMidPhase_*> *pFVar28;
  ulong64 uVar29;
  ForElementType<Chaos::FParticlePairMidPhase_*> FVar30;
  int iVar31;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_118 [8];
  FName local_110;
  ForElementType<Chaos::FParticlePairMidPhase_*> local_108;
  int local_100 [2];
  FColor_u_0 local_f8;
  FColor_u_0 local_f4;
  FMemMark local_f0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  code *local_80;
  undefined1 *local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  uVar29 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Collisions_ProcessNewMidPhases =
         (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_2_::FStat_STAT_Collisions_ProcessNewMidPhases>
          )0x0;
    pFVar20 = ::FName::FName(&local_70,"STAT_Collisions_ProcessNewMidPhases");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ProcessNewMidPhases,*pFVar20,
               L"STAT_Collisions_ProcessNewMidPhases","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_Collisions_ProcessNewMidPhases;
  if (StatPtr_STAT_Collisions_ProcessNewMidPhases ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_2_::FStat_STAT_Collisions_ProcessNewMidPhases>
       )0x0) {
    pFVar20 = ::FName::FName(&local_68,"STAT_Collisions_ProcessNewMidPhases");
    FVar21 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_2_::FStat_STAT_Collisions_ProcessNewMidPhases>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ProcessNewMidPhases,
                          *pFVar20,L"STAT_Collisions_ProcessNewMidPhases","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar21;
  bVar14 = false;
  FVar13 = (FIdentityFunctor)0x0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar16 = false;
  FVar15 = (FIdentityFunctor)0x0;
  if ((FVar5.ComparisonIndex.Value.Value == 0) && (FVar5.Number == 0)) {
LAB_1439d7bc0:
    bVar14 = bVar16;
    FVar13 = FVar15;
    bVar16 = false;
    local_110 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar14 = false;
      FVar13 = (FIdentityFunctor)0x1;
      bVar16 = false;
      FVar15 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_c8.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0x26);
        bVar14 = true;
        FVar13 = (FIdentityFunctor)0x1;
        bVar16 = true;
        FVar15 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1439d7bc0;
    local_110 = FVar5;
    FThreadStats::AddMessage(FVar5,CycleScopeStart);
    bVar16 = true;
  }
  puVar22 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_78 = local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar23 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar22);
  local_108.Data = (FParticlePairMidPhase **)0x0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_f0.Mem = (FMemStackBase *)(pFVar23 + 2);
  local_f0.Top = (local_f0.Mem)->Top;
  local_f0.SavedChunk = *(FTaggedMemory **)(pFVar23 + 4);
  local_f0.bPopped = false;
  local_f0.NextTopmostMark = *(FMemMark **)(pFVar23 + 5);
  pFVar23[5] = (FTlsAutoCleanup)&local_f0;
  *(int *)(pFVar23 + 6) = *(int *)(pFVar23 + 6) + 1;
  pFVar26 = (this->ContextAllocators).AllocatorInstance.Data;
  iVar19 = (this->ContextAllocators).ArrayNum;
  pFVar2 = pFVar26 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->ContextAllocators).ArrayNum != iVar19) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    iVar31 = (int)uVar29;
    if (pFVar26 == pFVar2) break;
    uVar29 = (ulong64)(uint)(iVar31 + *(int *)(*(longlong *)pFVar26 + 0x28));
    pFVar26 = pFVar26 + 8;
  }
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar29);
  }
  if (0 < iVar31) {
    UE::Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<Chaos::FParticlePairMidPhase_*>_>
              (8,8,iVar31,&local_108,0,local_100 + 1);
  }
  pFVar26 = (this->ContextAllocators).AllocatorInstance.Data;
  iVar19 = (this->ContextAllocators).ArrayNum;
  pFVar2 = pFVar26 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->ContextAllocators).ArrayNum != iVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    FVar5 = local_110;
    if (pFVar26 == pFVar2) break;
    lVar6 = *(longlong *)pFVar26;
    pFVar28 = (ForElementType<Chaos::FParticlePairMidPhase_*> *)(lVar6 + 0x20);
    if ((&local_108 == pFVar28) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar4 = *(int *)(lVar6 + 0x28);
    if (iVar4 != 0) {
      iVar18 = UE::Core::Private::
               ReallocGrow<0,TMemStackAllocator<0>::ForElementType<Chaos::FParticlePairMidPhase_*>_>
                         (8,8,iVar4,&local_108,local_100,local_100 + 1);
      memcpy(local_108.Data + iVar18,pFVar28->Data,(longlong)iVar4 << 3);
    }
    lVar6 = *(longlong *)pFVar26;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    if (*(int *)(lVar6 + 0x2c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar6 + 0x20),0,(int *)(lVar6 + 0x2c));
    }
    pFVar26 = pFVar26 + 8;
  }
  iVar19 = local_100[0];
  if ((local_100[0] != iVar31) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewMidPhases.Num() == NumNewMidPhases",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                          ,0x39,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (this->bIsDeteministic == false) goto LAB_1439d80b1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_Collisions_SortMidPhases =
         (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_20_::FStat_STAT_Collisions_SortMidPhases>
          )0x0;
    pFVar20 = ::FName::FName(&local_60,"STAT_Collisions_SortMidPhases");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SortMidPhases,*pFVar20,
               L"STAT_Collisions_SortMidPhases","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar24 = StatPtr_STAT_Collisions_SortMidPhases;
  if (StatPtr_STAT_Collisions_SortMidPhases ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_20_::FStat_STAT_Collisions_SortMidPhases>
       )0x0) {
    pFVar20 = ::FName::FName(local_58,"STAT_Collisions_SortMidPhases");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases(void)_::_20_::FStat_STAT_Collisions_SortMidPhases>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SortMidPhases,
                          *pFVar20,L"STAT_Collisions_SortMidPhases","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar24;
  bVar17 = false;
  bVar12 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_1439d7fca:
    bVar11 = false;
    FVar27 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar17 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_c0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0x40);
        bVar17 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1439d7fca;
    local_110 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar11 = true;
  }
  AlgoImpl::
  IntroSortInternal<Chaos::FParticlePairMidPhase_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FParticlePairMidPhase_*,_Chaos::Private::FCollisionConstraintAllocator::ProcessNewMidPhases_::__l20::<lambda_1>_>_>
            (local_108.Data,iVar19,FVar13,(<lambda_1> *)local_118);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_90);
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
LAB_1439d80b1:
  ppFVar3 = local_108.Data + iVar19;
  for (FVar30.Data = local_108.Data; FVar30.Data != ppFVar3; FVar30.Data = FVar30.Data + 1) {
    pFVar7 = *FVar30.Data;
    pTVar8 = pFVar7->Particle0;
    pTVar9 = pFVar7->Particle1;
    pFVar25 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                        ((TGeometryParticlesImp<double,3,0> *)pTVar8->_padding_,
                         (int)pTVar8->_padding_);
    FParticleCollisions::AddMidPhase(pFVar25,pTVar8,pFVar7);
    pFVar25 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                        ((TGeometryParticlesImp<double,3,0> *)pTVar9->_padding_,
                         (int)pTVar9->_padding_);
    FParticleCollisions::AddMidPhase(pFVar25,pTVar9,pFVar7);
    iVar19 = (this->ParticlePairMidPhases).ArrayNum;
    piVar1 = &(this->ParticlePairMidPhases).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->ParticlePairMidPhases).AllocatorInstance,piVar1);
    }
    (this->ParticlePairMidPhases).ArrayNum = iVar19 + 1;
    *(FParticlePairMidPhase **)
     ((this->ParticlePairMidPhases).AllocatorInstance.Data + (longlong)iVar19 * 8) = pFVar7;
  }
  if (local_f0.bPopped == false) {
    if (((local_f0.Mem)->TopMark != &local_f0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_f0.bPopped = true;
    (local_f0.Mem)->NumMarks = (local_f0.Mem)->NumMarks + -1;
    if (local_f0.SavedChunk != (local_f0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_f0.Mem,local_f0.SavedChunk);
    }
    (local_f0.Mem)->Top = local_f0.Top;
    (local_f0.Mem)->TopMark = local_f0.NextTopmostMark;
    local_f0.Top = (uchar *)0x0;
  }
  if ((bool)FVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar5,CycleScopeEnd);
  }
  return;
}

// ProcessNewNonCcdConstraints @ 1439d8200

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints
          (FCollisionConstraintAllocator *this,
          TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FTaskGraphInterface *pFVar14;
  FTaskBase *this_00;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_11_::FStat_STAT_Collisions_SubProcessNewConstraints>
  FVar16;
  uint uVar17;
  FTaskBase *pFVar18;
  FTaskBase *pFVar19;
  FName FVar20;
  FTaskBase *pFVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *pTVar24;
  uint uVar25;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_c8;
  ForAnyElementType local_b8;
  int local_b0 [4];
  FTaskBase *local_a0;
  longlong local_98;
  FName local_90;
  int local_88;
  uint local_84;
  FColor_u_0 local_80 [2];
  FName local_78;
  FName local_70;
  FName local_60;
  FName local_58 [3];
  
  iVar11 = MaxNumWorkers;
  if (GSingleThreadedPhysics == 0) {
    pFVar14 = FTaskGraphInterface::Get();
    iVar13 = (**(code **)((longlong)*pFVar14 + 0x20))(pFVar14);
    if (iVar13 < iVar11) {
      iVar11 = iVar13;
    }
  }
  else {
    iVar11 = 1;
  }
  iVar13 = param_1->ArrayNum;
  iVar23 = iVar13;
  if (iVar11 < iVar13) {
    iVar23 = iVar11;
  }
  iVar11 = 1;
  if (1 < iVar23) {
    iVar11 = iVar23;
  }
  iVar11 = (iVar13 + -1 + iVar11) / iVar11;
  iVar23 = 1;
  if (1 < iVar11) {
    iVar23 = iVar11;
  }
  uVar3 = (longlong)(iVar13 + -1 + iVar23) / (longlong)iVar23;
  iVar11 = (int)uVar3;
  local_b0[2] = iVar13;
  local_88 = iVar11;
  bVar9 = ShouldExecuteTasksInParallel(iVar11);
  pFVar19 = (FTaskBase *)0x0;
  if (bVar9) {
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar3 & 0xffffffff);
    }
    if (iVar11 < 1) {
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0[0] = 0;
      local_b0[1] = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar11,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar11,&local_b8,local_b0,local_b0 + 1);
      memset(local_b8.Data + (longlong)iVar12 * 0x10,0,(longlong)iVar11 << 4);
      local_84 = iVar11 - 1;
      local_90.ComparisonIndex.Value = 0;
      local_90.Number = 0;
      pFVar21 = pFVar19;
      pFVar18 = pFVar19;
      iVar11 = iVar23;
      do {
        uVar25 = (uint)pFVar18;
        iVar12 = iVar11;
        if ((uVar25 == local_84) && (iVar13 < iVar11)) {
          iVar12 = iVar13;
        }
        uVar17 = 0;
        if ((int)uVar25 < local_b0[0]) {
          uVar17 = ~uVar25 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar22 = local_b8.Data + (longlong)pFVar21;
        this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar18 = pFVar19;
        if (this_00 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints'::`7'::<lambda_1>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    (this_00,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp(119)"
                     ,High,None,None);
          this_00[1]._padding_ = (longlong)this;
          *(int *)&this_00[1]._padding_ = iVar11 - iVar23;
          *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar12;
          this_00[1]._padding_ = (longlong)param_1;
          this_00[1]._padding_ = (longlong)pFVar22;
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints'::`7'::<lambda_1>_>
                ::_vftable_;
          pFVar18 = this_00;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar18,0x100);
        local_a0 = pFVar18;
        if (((local_c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a0) &&
            ((FScriptContainerElement *)&local_a0 <
             local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = local_c8.ArrayNum;
        if (local_c8.ArrayNum == local_c8.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        local_c8.ArrayNum = iVar13 + 1;
        *(undefined8 *)(local_c8.AllocatorInstance.Data + (longlong)iVar13 * 8) = 0;
        *(FTaskBase **)(local_c8.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_a0;
        if (local_a0 != (FTaskBase *)0x0) {
          LOCK();
          local_a0->RefCount = (atomic<unsigned_int>)((int)local_a0->RefCount + 1);
          UNLOCK();
          if (local_a0 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &local_a0->RefCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<unsigned_int>)0x1) {
              (**(code **)local_a0->_padding_)(local_a0,1);
            }
          }
        }
        pFVar18 = (FTaskBase *)(ulonglong)(uVar25 + 1);
        iVar11 = iVar11 + iVar23;
        local_90 = (FName)((longlong)local_90 + 1);
        pFVar21 = (FTaskBase *)&pFVar21->_padding_;
        iVar13 = local_b0[2];
      } while ((int)(uVar25 + 1) < local_88);
    }
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (&local_c8,(FTimespan)0x7fffffffffffffff);
    pFVar21 = pFVar19;
    if (0 < local_b0[0]) {
      do {
        uVar17 = (uint)pFVar19;
        uVar25 = 0;
        if ((int)uVar17 < local_b0[0]) {
          uVar25 = ~uVar17 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar24 = (TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)
                  (local_b8.Data + (longlong)pFVar21);
        if ((param_2 == pTVar24) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = pTVar24->ArrayNum;
        if (iVar11 != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar11,&param_2->AllocatorInstance,&param_2->ArrayNum,
                              &param_2->ArrayMax);
          memcpy((param_2->AllocatorInstance).Data + (longlong)iVar13 * 8,
                 (pTVar24->AllocatorInstance).Data,(longlong)iVar11 << 3);
        }
        pFVar19 = (FTaskBase *)(ulonglong)(uVar17 + 1);
        pFVar21 = (FTaskBase *)&pFVar21->_padding_;
      } while ((int)(uVar17 + 1) < local_b0[0]);
    }
    DestructItems<TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)local_b8.Data
               ,local_b0[0]);
    if ((TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)local_b8.Data !=
        (TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if (local_c8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_c8.AllocatorInstance.Data);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Collisions_SubProcessNewConstraints ==
        (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_11_::FStat_STAT_Collisions_SubProcessNewConstraints>
         )0x0) {
      pFVar15 = ::FName::FName(&local_60,"STAT_Collisions_SubProcessNewConstraints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SubProcessNewConstraints,
                 *pFVar15,L"STAT_Collisions_SubProcessNewConstraints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_Collisions_SubProcessNewConstraints;
  if (StatPtr_STAT_Collisions_SubProcessNewConstraints ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_11_::FStat_STAT_Collisions_SubProcessNewConstraints>
       )0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_Collisions_SubProcessNewConstraints");
    FVar16 = (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FCollisionConstraintAllocator::ProcessNewNonCcdConstraints(TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_>_&)_::_11_::FStat_STAT_Collisions_SubProcessNewConstraints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Collisions_SubProcessNewConstraints,*pFVar15,
                          L"STAT_Collisions_SubProcessNewConstraints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar9 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar10 = false;
  bVar6 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar9, bVar7 = bVar8, FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_80[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_80[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar10 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_78.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                   ,0x92);
        bVar9 = true;
        bVar8 = true;
        bVar10 = true;
        bVar6 = true;
      }
    }
    bVar5 = bVar9;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      bVar6 = true;
      goto LAB_1439d87d4;
    }
  }
  bVar8 = bVar6;
  bVar9 = bVar10;
  bVar10 = false;
  bVar6 = false;
  local_90 = local_70;
  FVar20 = local_70;
LAB_1439d87d4:
  iVar11 = local_b0[2];
  pFVar21 = pFVar19;
  if (0 < local_b0[2]) {
    do {
      uVar17 = (uint)pFVar21;
      uVar25 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar25 = ~uVar17 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_98 = *(longlong *)
                  ((param_1->AllocatorInstance).Data + -0x58 +
                  (longlong)&(pFVar19->Prerequisites).Prerequisites);
      *(int *)(local_98 + 0x14c) = this->CurrentEpoch;
      *(undefined4 *)(local_98 + 0x154) = 0xffffffff;
      *(uint *)(local_98 + 0x150) = *(uint *)(local_98 + 0x150) & 0x80000000 ^ uVar17;
      if ((*(ushort *)(local_98 + 0x374) >> 9 & 1) != 0) {
        pFVar22 = (param_2->AllocatorInstance).Data;
        if (((pFVar22 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < pFVar22 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_98;
      }
      pFVar19 = (FTaskBase *)&pFVar19->_padding_;
      FVar20 = local_90;
      pFVar21 = (FTaskBase *)(ulonglong)(uVar17 + 1);
      bVar5 = bVar9;
      bVar10 = bVar6;
      bVar7 = bVar8;
    } while ((int)(uVar17 + 1) < iVar11);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// PruneExpiredMidPhases @ 1439da860

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::PruneExpiredMidPhases
          (FCollisionConstraintAllocator *this)

{
  TArray<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FParticlePairMidPhase *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FParticleCollisions *pFVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  
  iVar13 = (this->ParticlePairMidPhases).ArrayNum;
  uVar12 = iVar13 - 1;
  if (-1 < (int)uVar12) {
    this_00 = &this->ParticlePairMidPhases;
    lVar14 = (longlong)(int)uVar12;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->ParticlePairMidPhases).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      pFVar4 = *(FParticlePairMidPhase **)(pFVar3 + lVar14 * 8);
      pFVar3 = pFVar3 + lVar14 * 8;
      if ((pFVar4->LastUsedEpoch < this->CurrentEpoch) && (-1 < *(char *)&pFVar4->Flags)) {
        pTVar5 = pFVar4->Particle0;
        if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                              ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                               (int)pTVar5->_padding_);
          FParticleCollisions::RemoveMidPhase(pFVar10,pTVar5,pFVar4);
        }
        pTVar5 = pFVar4->Particle1;
        if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                              ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                               (int)pTVar5->_padding_);
          FParticleCollisions::RemoveMidPhase(pFVar10,pTVar5,pFVar4);
        }
        puVar6 = *(undefined8 **)pFVar3;
        if (puVar6 != (undefined8 *)0x0) {
          *(longlong *)pFVar3 = 0;
          (**(code **)*puVar6)(puVar6,1);
        }
        iVar1 = (this->ParticlePairMidPhases).ArrayNum;
        piVar11 = &(this->ParticlePairMidPhases).ArrayMax;
        iVar2 = *piVar11;
        uVar9 = 0;
        if (iVar13 <= iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar12,1);
        if (1000 < iVar2 - iVar1) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this_00->AllocatorInstance,(this->ParticlePairMidPhases).ArrayNum,piVar11)
          ;
        }
      }
      lVar14 = lVar14 + -1;
      iVar13 = iVar13 + -1;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// RemoveActiveConstraint @ 1439dc560

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::RemoveActiveConstraint
          (FCollisionConstraintAllocator *this,FPBDCollisionConstraint *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1->ContainerCookie).LastUsedEpoch == this->CurrentEpoch) {
    uVar5 = (param_1->ContainerCookie).ConstraintIndex;
    if (uVar5 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar5 < (this->ActiveConstraints).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(FPBDCollisionConstraint **)
            ((this->ActiveConstraints).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) != param_1
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ActiveConstraints[Cookie.ConstraintIndex] == &Constraint",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                                   ,0x15f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = (param_1->ContainerCookie).ConstraintIndex;
      uVar5 = 0;
      if ((int)uVar4 < (this->ActiveConstraints).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)((this->ActiveConstraints).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) =
           0;
      (param_1->ContainerCookie).ConstraintIndex = -1;
    }
    uVar5 = (param_1->ContainerCookie).CCDConstraintIndex;
    if (uVar5 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar5 < (this->ActiveCCDConstraints).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(FPBDCollisionConstraint **)
            ((this->ActiveCCDConstraints).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) !=
           param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActiveCCDConstraints[Cookie.CCDConstraintIndex] == &Constraint",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                             ,0x167,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (param_1->ContainerCookie).CCDConstraintIndex;
      uVar4 = 0;
      if ((int)uVar5 < (this->ActiveCCDConstraints).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)
       ((this->ActiveCCDConstraints).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = 0;
      (param_1->ContainerCookie).CCDConstraintIndex = -1;
    }
  }
  return;
}

// RemoveParticle @ 1439dd4d0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
          (FCollisionConstraintAllocator *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FParticlePairMidPhase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleCollisions *pFVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FCollisionConstraintAllocator *local_res8;
  
  if ((this->bInCollisionDetectionPhase != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInCollisionDetectionPhase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\CollisionConstraintAllocator.cpp"
                         ,0x170,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  uVar7 = 0;
  iVar5 = (pFVar4->MidPhases).ArrayNum;
  uVar8 = uVar7;
  if (0 < iVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FParticlePairMidPhase **)((pFVar4->MidPhases).AllocatorInstance.Data + uVar8 + 8);
      local_res8 = this;
      FParticlePairMidPhase::
      VisitCollisions<__Chaos::Private::FCollisionConstraintAllocator::RemoveParticle_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (this_00,(<lambda_1> *)&local_res8,VisitDefault);
      (this_00->Flags).Bits = (this_00->Flags).Bits & 0xfe29 | 0x21;
      (**(code **)(this_00->_padding_ + 0x10))(this_00);
      if (param_1 == this_00->Particle0) {
        this_00->Particle0 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else if (param_1 == this_00->Particle1) {
        this_00->Particle1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      iVar5 = (pFVar4->MidPhases).ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x10;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  return;
}

// ResetActiveConstraints @ 1439dd910

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::ResetActiveConstraints
          (FCollisionConstraintAllocator *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FPBDCollisionConstraint *this_00;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->ActiveConstraints).AllocatorInstance.Data;
  iVar3 = (this->ActiveConstraints).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ActiveConstraints).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FPBDCollisionConstraint_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    this_00 = *(FPBDCollisionConstraint **)pFVar5;
    if (this_00 != (FPBDCollisionConstraint *)0x0) {
      (this_00->Flags).Bits = (this_00->Flags).Bits | 2;
      bVar4 = FPBDCollisionConstraint::IsSleeping(this_00);
      if (!bVar4) {
        (this_00->Flags).Bits = (this_00->Flags).Bits & 0xfffe;
      }
      (this_00->ContainerCookie).ConstraintIndex = -1;
      (this_00->ContainerCookie).CCDConstraintIndex = -1;
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// SetConstraintCookie @ 1439de2a0

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::SetConstraintCookie
          (FCollisionConstraintAllocator *this,FPBDCollisionConstraint *param_1,int param_2)

{
  (param_1->ContainerCookie).LastUsedEpoch = this->CurrentEpoch;
  (param_1->ContainerCookie).CCDConstraintIndex = -1;
  *(uint *)&(param_1->ContainerCookie).field_0x10 =
       (param_2 ^ *(uint *)&(param_1->ContainerCookie).field_0x10) & 0x80000000 ^ param_2;
  return;
}

// SortActiveConstraints @ 1439df220

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::SortActiveConstraints
          (FCollisionConstraintAllocator *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FIdentityFunctor local_res8 [8];
  
  iVar1 = (this->ActiveConstraints).ArrayNum;
  if (iVar1 != 0) {
    AlgoImpl::
    IntroSortInternal<Chaos::FPBDCollisionConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FPBDCollisionConstraint_*,_Chaos::Private::FCollisionConstraintAllocator::SortActiveConstraints_::__l5::<lambda_1>_>_>
              ((FPBDCollisionConstraint **)(this->ActiveConstraints).AllocatorInstance.Data,iVar1,
               local_res8[0],(<lambda_1> *)local_res8);
    uVar6 = 0;
    if (0 < (this->ActiveConstraints).ArrayNum) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->ActiveConstraints).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((this->ActiveConstraints).AllocatorInstance.Data + lVar7);
        lVar7 = lVar7 + 8;
        uVar5 = (uVar6 ^ *(uint *)(lVar2 + 0x150)) & 0x80000000 ^ uVar6;
        uVar6 = uVar6 + 1;
        *(uint *)(lVar2 + 0x150) = uVar5;
      } while ((int)uVar6 < (this->ActiveConstraints).ArrayNum);
    }
  }
  return;
}

// ~FCollisionConstraintAllocator @ 143c45270

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::~FCollisionConstraintAllocator
          (FCollisionConstraintAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  Reset(this);
  pFVar1 = (this->ActiveCCDConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int>
            ((TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>
              *)(this->ParticlePairMidPhases).AllocatorInstance.Data,
             (this->ParticlePairMidPhases).ArrayNum);
  pFVar1 = (this->ParticlePairMidPhases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int>
            ((TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>
              *)(this->ContextAllocators).AllocatorInstance.Data,(this->ContextAllocators).ArrayNum)
  ;
  pFVar1 = (this->ContextAllocators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reset @ 143c70d90

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::Reset(FCollisionConstraintAllocator *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->ActiveConstraints).ArrayNum = 0;
  if ((this->ActiveConstraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveConstraints).AllocatorInstance,0,
               &(this->ActiveConstraints).ArrayMax);
  }
  (this->ActiveCCDConstraints).ArrayNum = 0;
  if ((this->ActiveCCDConstraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveCCDConstraints).AllocatorInstance,0,
               &(this->ActiveCCDConstraints).ArrayMax);
  }
  piVar1 = &(this->ParticlePairMidPhases).ArrayMax;
  pFVar3 = (this->ParticlePairMidPhases).AllocatorInstance.Data;
  iVar2 = (this->ParticlePairMidPhases).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int>
              ((TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>
                *)pFVar3,iVar2);
    (this->ParticlePairMidPhases).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ParticlePairMidPhases).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int>
              ((TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>
                *)pFVar3,iVar2);
    (this->ParticlePairMidPhases).ArrayNum = 0;
  }
  pFVar3 = (this->ContextAllocators).AllocatorInstance.Data;
  piVar1 = &(this->ContextAllocators).ArrayMax;
  iVar2 = (this->ContextAllocators).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int>
              ((TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>
                *)pFVar3,iVar2);
    (this->ContextAllocators).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ContextAllocators).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>,int>
              ((TUniquePtr<Chaos::Private::FCollisionContextAllocator,TDefaultDelete<Chaos::Private::FCollisionContextAllocator>_>
                *)pFVar3,iVar2);
    (this->ContextAllocators).ArrayNum = 0;
  }
  return;
}

// AddResimConstraints @ 143d3b680

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::AddResimConstraints
          (FCollisionConstraintAllocator *this,
          TArray<Chaos::FPBDCollisionConstraint,TSizedDefaultAllocator<32>_> *param_1,
          FCollisionContext *param_2)

{
  uint uVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  FParticleID FVar4;
  FCollisionContextAllocator *this_00;
  bool bVar5;
  bool bVar6;
  EObjectStateType EVar7;
  EObjectStateType EVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  FParticleID *pFVar10;
  FParticlePairMidPhase *this_01;
  int iVar11;
  ulonglong uVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  int iVar14;
  int iVar15;
  FPBDCollisionConstraint *pFVar16;
  FPBDCollisionConstraint *pFVar17;
  bool bVar18;
  undefined1 local_res10 [8];
  
  uVar1 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar17 = (FPBDCollisionConstraint *)(param_1->AllocatorInstance).Data;
  pFVar16 = pFVar17 + uVar12;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<Chaos::FPBDCollisionConstraint_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar17 == pFVar16) break;
    pTVar2 = pFVar17->Particle[0];
    pTVar3 = pFVar17->Particle[1];
    pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
      pTVar9 = pTVar2;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar7 = Static;
    }
    else {
      pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
        pTVar13 = pTVar9;
      }
      if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Kinematic;
      }
      else {
        EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13);
      }
    }
    pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
      pTVar9 = pTVar3;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar8 = Static;
    }
    else {
      pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar9->_padding_ + 4)) {
        pTVar13 = pTVar9;
      }
      if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar8 = Kinematic;
      }
      else {
        EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13);
      }
    }
    if ((EVar7 == Dynamic) || (EVar7 == Sleeping)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((EVar8 == Dynamic) || (EVar8 == Sleeping)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                         (int)pTVar3->_padding_);
    FVar4 = *pFVar10;
    pFVar10 = TGeometryParticlesImp<double,3,0>::ParticleID
                        ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                         (int)pTVar2->_padding_);
    iVar11 = (*pFVar10).GlobalID;
    iVar14 = FVar4.GlobalID;
    bVar18 = SBORROW4(iVar14,iVar11);
    iVar15 = iVar14 - iVar11;
    if (iVar14 == iVar11) {
      iVar11 = (*pFVar10).LocalID;
      iVar15 = FVar4.LocalID;
      bVar18 = SBORROW4(iVar15,iVar11);
      iVar15 = iVar15 - iVar11;
    }
    if ((!bVar5) || ((bVar6 && (bVar18 == iVar15 < 0)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    this_00 = param_2->Allocator;
    pTVar9 = pTVar3;
    if (!bVar5) {
      pTVar9 = pTVar2;
      pTVar2 = pTVar3;
    }
    this_01 = FCollisionContextAllocator::FindMidPhaseImpl
                        (this_00,pTVar9,pTVar2,pFVar17->Particle[0]);
    if (this_01 == (FParticlePairMidPhase *)0x0) {
      this_01 = FCollisionContextAllocator::CreateMidPhase(this_00,pTVar9,pTVar2,param_2);
    }
    ProcessNewMidPhases(this);
    if (this_01 != (FParticlePairMidPhase *)0x0) {
      FParticlePairMidPhase::InjectCollision(this_01,pFVar17,param_2);
    }
    pFVar17 = pFVar17 + 1;
    uVar12 = (ulonglong)uVar1;
  }
  ProcessNewConstraints(this);
  return;
}

// GetCCDConstraints @ 143d54960

TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> * __thiscall
Chaos::Private::FCollisionConstraintAllocator::GetCCDConstraints
          (FCollisionConstraintAllocator *this,
          TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *pTVar4;
  
  iVar1 = (this->ActiveCCDConstraints).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FPBDCollisionConstraint **)(this->ActiveCCDConstraints).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetContextAllocator @ 143d551d0

FCollisionContextAllocator * __thiscall
Chaos::Private::FCollisionConstraintAllocator::GetContextAllocator
          (FCollisionConstraintAllocator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCollisionContextAllocator *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ContextAllocators).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollisionContextAllocator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FCollisionContextAllocator **)
          ((this->ContextAllocators).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// SetMaxContexts @ 143d6ec40

void __thiscall
Chaos::Private::FCollisionConstraintAllocator::SetMaxContexts
          (FCollisionConstraintAllocator *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  iVar3 = (this->ContextAllocators).ArrayNum;
  uVar5 = param_1 - iVar3;
  if (0 < (int)uVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->ContextAllocators).ArrayMax;
    if (*piVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&(this->ContextAllocators).AllocatorInstance,iVar3,piVar1);
    }
    uVar7 = (ulonglong)uVar5;
    do {
      puVar4 = ::operator_new(0x50);
      puVar6 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        iVar3 = this->CurrentEpoch;
        iVar2 = this->NumCollisionsPerBlock;
        *puVar4 = this->CollisionContainer;
        *(int *)(puVar4 + 1) = iVar3;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *(int *)(puVar4 + 8) = iVar2;
        *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
        puVar6 = puVar4;
      }
      iVar3 = (this->ContextAllocators).ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ContextAllocators).AllocatorInstance,piVar1);
      }
      (this->ContextAllocators).ArrayNum = iVar3 + 1;
      *(undefined8 **)((this->ContextAllocators).AllocatorInstance.Data + (longlong)iVar3 * 8) =
           puVar6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

